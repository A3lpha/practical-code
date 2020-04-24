Public Class Form2

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        Dim user As String
        Dim pass As Integer
        user = TextBox1.Text
        pass = TextBox2.Text
        If user = "admin" And pass = "123" Then
            MessageBox.Show("welcome")
            Me.Hide()
            Form1.Show()
        Else
            MessageBox.Show("waxaad soo gelisay waa qalad")


        End If
    End Sub
End Class