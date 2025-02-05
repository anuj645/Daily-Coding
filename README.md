import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class LoginPanel extends JPanel {
    private JTextField phoneNumberField;
    private JTextField emailField;
    private JButton loginButton;

    public LoginPanel() {
        phoneNumberField = new JTextField(20); // Set preferred columns for text fields
        phoneNumberField.setToolTipText("Enter Phone Number");

        emailField = new JTextField(20); // Set preferred columns for text fields
        emailField.setToolTipText("Enter Email Address");

        loginButton = new JButton("Login");
        loginButton.addActionListener(new ActionListener() {
            @Override

            
            public void actionPerformed(ActionEvent e) {
                login();
            }
        });

        add(new JLabel("Phone Number:")); // Label for phone number field
        add(phoneNumberField);
        add(new JLabel("Email Address:")); // Label for email field
        add(emailField);
        add(loginButton);
    }

    private void login() {
        String phoneNumber = phoneNumberField.getText();
        String email = emailField.getText();

        if (!phoneNumber.isEmpty() && !email.isEmpty()) {
            // Perform login logic here
            // For now, let's just display a message
            JOptionPane.showMessageDialog(this, "Login successful!");
        } else {
            JOptionPane.showMessageDialog(this, "Please enter both phone number and email address!");
        }
    }

    public static void main(String[] args) {
        JFrame frame = new JFrame("Login Panel");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(400, 200);
        frame.getContentPane().add(new LoginPanel());
        frame.setVisible(true);
    }
}
