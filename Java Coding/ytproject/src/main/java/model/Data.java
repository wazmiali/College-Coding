package model;

public class Data {
    private int id;
    private String fileName;
    private String path;
    private String email;

    // Constructor for full data
    public Data(int id, String fileName, String path, String email) {
        this.id = id;
        this.fileName = fileName;
        this.path = path;
        this.email = email;
    }

    // Optional constructor without email (used only if you don't need email temporarily)
    public Data(int id, String fileName, String path) {
        this(id, fileName, path, null); // Calls the main constructor with null email
    }

    // Getters & Setters
    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getFileName() {
        return fileName;
    }

    public void setFileName(String fileName) {
        this.fileName = fileName;
    }

    public String getPath() {
        return path;
    }

    public void setPath(String path) {
        this.path = path;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }
}
