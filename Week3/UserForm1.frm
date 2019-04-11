VERSION 5.00
Begin {C62A69F0-16DC-11CE-9E98-00AA00574A4F} UserForm1 
   Caption         =   "UserForm1"
   ClientHeight    =   7485
   ClientLeft      =   120
   ClientTop       =   465
   ClientWidth     =   5280
   OleObjectBlob   =   "UserForm1.frx":0000
   StartUpPosition =   1  'CenterOwner
End
Attribute VB_Name = "UserForm1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Dim A As Double, B As Double, KQ As Double
Dim Pheptinh As Integer

Private Sub daubang_Click()
B = hienthi.Text
Select Case Pheptinh
Case 1
KQ = A + B
Case 2
KQ = A - B
Case 3
KQ = A * B
Case 4
KQ = A / B
End Select
hienthi.Text = KQ

End Sub

Private Sub dauchia_Click()
A = hienthi.Text
Pheptinh = 4
hienthi.Text = ""
End Sub

Private Sub daucong_Click()
A = hienthi.Text
Pheptinh = 1
hienthi.Text = ""


End Sub

Private Sub daunhan_Click()
A = hienthi.Text
Pheptinh = 3
hienthi.Text = ""

End Sub

Private Sub dautru_Click()
A = hienthi.Text
Pheptinh = 2
hienthi.Text = ""

End Sub

Private Sub nut0_Click()
hienthi.Text = hienthi.Text & 0
End Sub

Private Sub nut1_Click()
hienthi.Text = hienthi.Text & 1

End Sub

Private Sub nut2_Click()
hienthi.Text = hienthi.Text & 2


End Sub

Private Sub nut3_Click()
hienthi.Text = hienthi.Text & 3
End Sub

Private Sub nut4_Click()
hienthi.Text = hienthi.Text & 4
End Sub

Private Sub nut5_Click()
hienthi.Text = hienthi.Text & 5
End Sub

Private Sub nut6_Click()
hienthi.Text = hienthi.Text & 6
End Sub

Private Sub nut7_Click()
hienthi.Text = hienthi.Text & 7
End Sub

Private Sub nut8_Click()
hienthi.Text = hienthi.Text & 8
End Sub

Private Sub nut9_Click()
hienthi.Text = hienthi.Text & 9
End Sub

Private Sub xoa_Click()
hienthi.Text = ""

End Sub
