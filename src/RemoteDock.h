#ifndef REMOTEDOCK_H
#define REMOTEDOCK_H

#include <QDialog>

#include "RemoteDatabase.h"
#include "RemoteNetwork.h"

class RemoteCommitsModel;
class RemoteLocalFilesModel;
class RemoteModel;
class MainWindow;

namespace Ui {
class RemoteDock;
}

class RemoteDock : public QDialog
{
    Q_OBJECT

public:
    explicit RemoteDock(MainWindow* parent);
    ~RemoteDock() override;

    void reloadSettings();
    void enableButtons();

    // This function should be called whenever a database file is opened.
    // It checks whether the file is a checkout of a tracked remote database
    // and updates some of the fields in the remote dock if it is.
    // Call it with an empty file name if the database is closed.
    void fileOpened(const QString& filename);

public slots:
    void reject() override;

private slots:
    void setNewIdentity(const QString& identity);
    void fetchDatabase(const QModelIndex& idx);
    void fetchDatabase(QString url = QString(), RemoteNetwork::RequestType request_type = RemoteNetwork::RequestTypeDatabase);
    void fetchCommit(const QModelIndex& idx, RemoteNetwork::RequestType request_type = RemoteNetwork::RequestTypeDatabase);
    void pushCurrentlyOpenedDatabase();
    void pushSelectedLocalDatabase();
    void newDirectoryNode(const QModelIndex& parent);
    void switchToMainView();
    void openLocalFile(const QModelIndex& idx);
    void deleteLocalDatabase(const QModelIndex& index);
    void openCurrentDatabaseInBrowser() const;
    void refresh();
    void pushFinished(const QString& filename, const QString& identity, const QUrl& url, const std::string& new_commit_id,
                      const std::string& branch, const QString& source_file);
    void fetchFinished(const QString& filename, const QString& identity, const QUrl& url, const std::string& new_commit_id,
                       const std::string& branch, const QDateTime& last_modified, QIODevice* device);

signals:
    void openFile(QString file);

private:
    Ui::RemoteDock* ui;

    MainWindow* mainWindow;

    RemoteDatabase remoteDatabase;
    RemoteModel* remoteModel;
    RemoteLocalFilesModel* remoteLocalFilesModel;
    RemoteCommitsModel* remoteCommitsModel;

    std::string current_commit_json;
    RemoteDatabase::LocalFileInfo currently_opened_file_info;

    void refreshLocalFileList();
    void refreshMetadata(const QString& username, const QString& dbname);

    bool isLocalDatabaseModified(const QString& local_file, const QString& username, const QString& dbname, const QString& identity, const std::string& commit_id);

    void pushDatabase(const QString& path, const QString& branch);
};

#endif
