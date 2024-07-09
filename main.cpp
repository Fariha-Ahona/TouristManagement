#include "mainwindow.h"
#include <QApplication>
#include <QtSql>
#include <QDebug>
#include <QFile>
#include <QDir>

QSqlDatabase initializeDatabase()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

    // Set the database path
    QString dbPath = "C:/Users/pc/OneDrive/Desktop/Data/database/tourist_management.db";
    db.setDatabaseName(dbPath);

    // Print the database path for debugging purposes
    qDebug() << "Database path:" << dbPath;

    // Check if the file exists and is writable
    QFile dbFile(dbPath);
    if (dbFile.exists()) {
        qDebug() << "Database file exists.";
    } else {
        qDebug() << "Database file does not exist.";
    }

    if (dbFile.open(QIODevice::WriteOnly | QIODevice::Append)) {
        qDebug() << "Database file is writable.";
        dbFile.close(); // Close the file after checking
    } else {
        qDebug() << "Database file is not writable.";
    }

    // Attempt to open the database
    if (!db.open()) {
        qDebug() << "Error: connection with database failed" << db.lastError();
        return QSqlDatabase();
    } else {
        qDebug() << "Database: connection ok";
    }

    QSqlQuery query;
    // Create the 'packages' table if it doesn't exist
    if (!query.exec("CREATE TABLE IF NOT EXISTS packages ("
                    "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                    "name TEXT, "
                    "description TEXT, "
                    "price REAL)")) {
        qDebug() << "Failed to create 'packages' table:" << query.lastError();
    }

    // Create the 'tourists' table if it doesn't exist
    if (!query.exec("CREATE TABLE IF NOT EXISTS tourists ("
                    "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                    "name TEXT, "
                    "contact TEXT, "
                    "address TEXT)")) {
        qDebug() << "Failed to create 'tourists' table:" << query.lastError();
    }

    return db;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSqlDatabase db = initializeDatabase(); // Initialize the database

    if (!db.isOpen()) {
        qDebug() << "Failed to open database. Exiting.";
        return -1; // Exit if the database could not be opened
    }

    MainWindow w;
    w.show();

    int ret = a.exec();

    // Ensure the database connection is closed before the application exits
    db.close();

    return ret;
}
