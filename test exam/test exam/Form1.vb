Public Class Form1

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        Dim a As String
        a = TextBox1.Text
        Dim b As Integer
        b = TextBox2.Text
        Dim c As Integer
        c = TextBox3.Text
        Dim d As Integer
        d = TextBox4.Text
        Dim h As Integer
        h = TextBox5.Text
        Dim total As Integer
        total = b + c + d + h
        TextBox6.Text = total
        Dim average As Integer
        average = total / 4
        TextBox7.Text = average
        If average > 95 Then
            TextBox8.Text = "A+"
        ElseIf average > 90 Then
            TextBox8.Text = "A"



        End If
    End Sub

    Private Sub Button2_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button2.Click
        TextBox1.Clear()
        TextBox2.Clear()
        TextBox3.Clear()
        TextBox4.Clear()
        TextBox5.Clear()
        TextBox6.Clear()
        TextBox7.Clear()
        TextBox8.Clear()

    End Sub
End Class

