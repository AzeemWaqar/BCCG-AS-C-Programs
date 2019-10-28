Module Module1

    Sub Main()
        Dim Bstr As String
        Dim Count1, Count2, BinNum, DecNum, Answer As Integer
        Dim char1, char2 As Char
        Dim validBinstr As Boolean

        Bstr = ""
        Count1 = 0
        Count2 = 0
        BinNum = 0
        DecNum = 0
        Answer = 1
        char1 = ""
        char2 = ""
        validBinstr = True

        Console.Write("Enter the Binary String: ")
        Bstr = Console.ReadLine

        If Len(Bstr) < 1 Or Len(Bstr) > 8 Then
            Console.WriteLine("Invalid Binary String")
        Else
            For Count1 = 1 To Len(Bstr)
                char1 = Mid(Bstr, Count1, 1)
                If char1 <> "1" And char1 <> "0" Then
                    validBinstr = False
                    Exit For
                End If
            Next
            If validbinstr = False Then
                Console.WriteLine("Invalid Binary String")
            Else
                For Count2 = Len(Bstr) To 1 Step -1
                    char2 = Mid(Bstr, Count2, 1)
                    BinNum = Val(char2)
                    BinNum = BinNum * Answer
                    DecNum = DecNum + BinNum
                    Answer = Answer * 2
                Next
                Console.WriteLine("The Denary Value of " & Bstr & " is : " & DecNum)
            End If
        End If
        Console.ReadKey()
    End Sub

End Module