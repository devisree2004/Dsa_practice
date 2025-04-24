import java.sql.*; 
 
public class devi { 
    // Database URL, username, and password 
    private static final String URL = "jdbc:mysql://localhost:3306/devi"; 
    private static final String USER = "root"; 
    private static final String PASSWORD = "simmi@2004"; 
 
    public static void main(String[] args) { 
        try { 
            // Scenario 1: Establishing database connectivity 
           

            Connection conn = DriverManager.getConnection(URL, USER, PASSWORD); 
            System.out.println("Database connected successfully!"); 
 
            // Scenario 2: Creating a table and selecting data 
            createTable(conn); 
            selectData(conn);
 
            // Scenario 3: Inserting, updating, and deleting records 
            insertData(conn); 
            selectData(conn);
            
            updateData(conn); 
            deleteData(conn); 
 
            // Closing the connection 
            conn.close(); 
        } catch (SQLException e) { 
            e.printStackTrace(); 
        } 
    } 
 
    // Scenario 2: Create a Table 
    private static void createTable(Connection conn) throws SQLException { 
        String createTableSQL = "CREATE TABLE IF NOT EXISTS Users (" 
                + "id INT AUTO_INCREMENT PRIMARY KEY, " 
                + "name VARCHAR(50), " 
                + "email VARCHAR(100), " 
                + "age INT)"; 
        try (Statement stmt = conn.createStatement()) { 
            stmt.executeUpdate(createTableSQL); 
            System.out.println("Table 'Users' created successfully!"); 
        } 
    } 
 
    // Scenario 3: Insert Data 
    private static void insertData(Connection conn) throws SQLException { 
        String insertSQL = "INSERT INTO Users (name, email, age) VALUES (?, ?, ?)"; 
        try (PreparedStatement pstmt = conn.prepareStatement(insertSQL)) { 
            pstmt.setString(1, "Alice"); 
            pstmt.setString(2, "alice@example.com"); 
            pstmt.setInt(3, 25); 
            pstmt.executeUpdate(); 
            System.out.println("Record inserted successfully!"); 
        } 
    } 
 
    // Scenario 3: Update Data 
    private static void updateData(Connection conn) throws SQLException { 
        String updateSQL = "UPDATE Users SET age = ? WHERE name = ?"; 
        try (PreparedStatement pstmt = conn.prepareStatement(updateSQL)) { 
            pstmt.setInt(1, 30); 
            pstmt.setString(2, "Alice"); 
            pstmt.executeUpdate(); 
            System.out.println("Record updated successfully!"); 
        } 
    } 
 
    // Scenario 3: Delete Data 
    private static void deleteData(Connection conn) throws SQLException { 
        String deleteSQL = "DELETE FROM Users WHERE name = ?"; 
        try (PreparedStatement pstmt = conn.prepareStatement(deleteSQL)) { 
            pstmt.setString(1, "Alice"); 
            pstmt.executeUpdate(); 
            System.out.println("Record deleted successfully!"); 
        } 
    } 
 
    // Scenario 2: Select Data 
    private static void selectData(Connection conn) throws SQLException { 
        String selectSQL = "SELECT * FROM Users"; 
        try (Statement stmt = conn.createStatement(); 
             ResultSet rs = stmt.executeQuery(selectSQL)) { 
 
            System.out.println("Users List:"); 
            while (rs.next()) { 
                int id = rs.getInt("id"); 
                String name = rs.getString("name"); 
                String email = rs.getString("email"); 
                int age = rs.getInt("age"); 
                System.out.println(id + " | " + name + " | " + email + " | " + age); 
            } 
        } 
    } 
}