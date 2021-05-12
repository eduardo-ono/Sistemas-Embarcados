import java.awt.*;
import javax.swing.*;

public class Teste {
    private static int cont = 0;

    public static void main(String args[]) {
        JFrame jFrame = new JFrame("Aplicativo");
        jFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        jFrame.setSize(640, 480);
        JPanel jPanel = new JPanel();
        JLabel jLabel = new JLabel();
        jLabel.setFont(new Font(jLabel.getName(), jLabel.getFont().getStyle(), 36));
        jPanel.add(jLabel);

        JButton jButton = new JButton("Reset");
        jButton.addActionListener(e -> {
            cont = 0;
        });
        jPanel.add(jButton);
        jFrame.add(jPanel);
        jFrame.setVisible(true);

        while (true)
        {
            jLabel.setText("" + cont + " ");
            try {
                Thread.sleep(100); // delay in ms
            } catch (InterruptedException ex) {
            }
            cont++;
        }
    } // main()

}
