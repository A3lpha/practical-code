Public Class form_MDI

    Private Sub AddProductToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles AddProductToolStripMenuItem.Click
        Product_form.MdiParent = Me
        Product_form.Show()

    End Sub

    Private Sub ManageProductToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles ManageProductToolStripMenuItem.Click
        Product_form2.MdiParent = Me
        Product_form2.Show()
    End Sub

    Private Sub ExitToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles ExitToolStripMenuItem.Click
        chang_password.MdiParent = Me
        chang_password.Show()
    End Sub

    Private Sub LogOutToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles LogOutToolStripMenuItem.Click
        End
    End Sub

    Private Sub ExitToolStripMenuItem6_Click(sender As Object, e As EventArgs) Handles ExitToolStripMenuItem6.Click
        End
    End Sub

    Private Sub ExitToolStripMenuItem5_Click(sender As Object, e As EventArgs) Handles ExitToolStripMenuItem5.Click
        End
    End Sub

    Private Sub AttendenceToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles AttendenceToolStripMenuItem.Click

    End Sub

    Private Sub ExitToolStripMenuItem4_Click(sender As Object, e As EventArgs) Handles ExitToolStripMenuItem4.Click
        End
    End Sub

    Private Sub ExitToolStripMenuItem2_Click(sender As Object, e As EventArgs) Handles ExitToolStripMenuItem2.Click
        End
    End Sub

    Private Sub ExitToolStripMenuItem1_Click(sender As Object, e As EventArgs) Handles ExitToolStripMenuItem1.Click
        End
    End Sub

    Private Sub ExitToolStripMenuItem3_Click(sender As Object, e As EventArgs) Handles ExitToolStripMenuItem3.Click
        End
    End Sub

    Private Sub CustemerToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles CustemerToolStripMenuItem.Click

    End Sub

    Private Sub AddEmployeeToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles AddEmployeeToolStripMenuItem.Click
        Employee_form.MdiParent = Me
        Employee_form.Show()
    End Sub

    Private Sub CreateUserToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles CreateUserToolStripMenuItem.Click
        User_form.MdiParent = Me
        User_form.Show()
    End Sub

    Private Sub ManageEmployeeToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles ManageEmployeeToolStripMenuItem.Click
        employee_form2.MdiParent = Me
        employee_form2.Show()
    End Sub

    Private Sub CustomerPurchaseToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles CustomerPurchaseToolStripMenuItem.Click
        Customer_sales.MdiParent = Me
        Customer_sales.Show()
    End Sub

    Private Sub EmployeeAttamdanceToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles EmployeeAttamdanceToolStripMenuItem.Click
        attendence_form.MdiParent = Me
        attendence_form.Show()
    End Sub

    Private Sub MenuStrip1_ItemClicked(sender As Object, e As ToolStripItemClickedEventArgs) Handles MenuStrip1.ItemClicked

    End Sub
End Class
