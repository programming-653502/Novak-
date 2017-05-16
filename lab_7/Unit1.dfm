object Form1: TForm1
  Left = 0
  Top = 0
  Caption = #1057#1087#1080#1089#1086#1082' '#1089#1090#1091#1076#1077#1085#1090#1086#1074
  ClientHeight = 484
  ClientWidth = 938
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 8
    Top = 8
    Width = 297
    Height = 456
    BevelInner = bvLowered
    TabOrder = 0
    object Label1: TLabel
      Left = 40
      Top = 16
      Width = 209
      Height = 16
      Caption = #1044#1086#1073#1072#1074#1083#1077#1085#1080#1077' '#1089#1090#1091#1076#1077#1085#1090#1072' '#1074' '#1089#1087#1080#1089#1086#1082
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label3: TLabel
      Left = 24
      Top = 48
      Width = 27
      Height = 13
      Caption = #1060#1048#1054':'
    end
    object Label4: TLabel
      Left = 24
      Top = 128
      Width = 75
      Height = 13
      Caption = #1053#1086#1084#1077#1088' '#1075#1088#1091#1087#1087#1099':'
    end
    object Label5: TLabel
      Left = 24
      Top = 208
      Width = 75
      Height = 13
      Caption = #1057#1088#1077#1076#1085#1080#1081' '#1073#1072#1083#1083':'
    end
    object Label6: TLabel
      Left = 24
      Top = 288
      Width = 117
      Height = 13
      Caption = #1044#1086#1093#1086#1076' '#1085#1072' '#1095#1083#1077#1085#1072' '#1089#1077#1084#1100#1080':'
    end
    object Edit1: TEdit
      Left = 24
      Top = 80
      Width = 177
      Height = 21
      TabOrder = 0
    end
    object ComboBox1: TComboBox
      Left = 24
      Top = 160
      Width = 121
      Height = 21
      TabOrder = 1
    end
    object Edit2: TEdit
      Left = 24
      Top = 240
      Width = 121
      Height = 21
      TabOrder = 2
    end
    object Edit3: TEdit
      Left = 24
      Top = 320
      Width = 121
      Height = 21
      TabOrder = 3
    end
    object Button1: TButton
      Left = 104
      Top = 384
      Width = 75
      Height = 25
      Caption = #1044#1086#1073#1072#1074#1080#1090#1100
      TabOrder = 4
      OnClick = Button1Click
    end
  end
  object Panel2: TPanel
    Left = 328
    Top = 8
    Width = 297
    Height = 456
    BevelInner = bvLowered
    TabOrder = 1
    object Label2: TLabel
      Left = 128
      Top = 16
      Width = 40
      Height = 16
      Caption = #1055#1086#1080#1089#1082
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label7: TLabel
      Left = 32
      Top = 48
      Width = 46
      Height = 13
      Caption = #1055#1086' '#1060#1048#1054': '
    end
    object Label8: TLabel
      Left = 32
      Top = 128
      Width = 223
      Height = 13
      Caption = #1055#1086' '#1076#1086#1093#1086#1076#1091' ('#1085#1077' '#1085#1080#1078#1077' '#1074#1074#1077#1076#1077#1085#1085#1086#1075#1086' '#1079#1085#1072#1095#1077#1085#1080#1103'):'
    end
    object Label9: TLabel
      Left = 32
      Top = 208
      Width = 251
      Height = 13
      Caption = #1055#1086' '#1089#1088#1077#1076#1085#1077#1084#1091' '#1073#1072#1083#1083#1091' ('#1085#1080#1078#1077' '#1074#1074#1077#1076#1077#1085#1085#1086#1075#1086' '#1079#1085#1072#1095#1077#1085#1080#1103'):'
    end
    object Edit4: TEdit
      Left = 16
      Top = 80
      Width = 169
      Height = 21
      TabOrder = 0
    end
    object Button3: TButton
      Left = 200
      Top = 78
      Width = 75
      Height = 25
      Caption = #1053#1072#1081#1090#1080
      TabOrder = 1
      OnClick = Button3Click
    end
    object Edit5: TEdit
      Left = 16
      Top = 160
      Width = 169
      Height = 21
      TabOrder = 2
    end
    object Button4: TButton
      Left = 200
      Top = 158
      Width = 75
      Height = 25
      Caption = #1053#1072#1081#1090#1080
      TabOrder = 3
      OnClick = Button4Click
    end
    object Edit6: TEdit
      Left = 16
      Top = 240
      Width = 169
      Height = 21
      TabOrder = 4
    end
    object Button5: TButton
      Left = 200
      Top = 238
      Width = 75
      Height = 25
      Caption = #1053#1072#1081#1090#1080
      TabOrder = 5
      OnClick = Button5Click
    end
  end
  object Memo1: TMemo
    Left = 648
    Top = 8
    Width = 273
    Height = 377
    Lines.Strings = (
      'Memo1')
    ScrollBars = ssVertical
    TabOrder = 2
  end
  object Button2: TButton
    Left = 696
    Top = 399
    Width = 193
    Height = 25
    Caption = #1055#1086#1082#1072#1079#1072#1090#1100' '#1074#1077#1089#1100' '#1089#1087#1080#1089#1086#1082
    TabOrder = 3
    OnClick = Button2Click
  end
  object Button6: TButton
    Left = 696
    Top = 439
    Width = 193
    Height = 25
    Caption = #1057#1090#1091#1076#1077#1085#1090#1099' '#1080#1079' '#1086#1073#1077#1089#1087#1077#1095#1077#1085#1085#1099#1093' '#1089#1077#1084#1077#1081
    TabOrder = 4
    OnClick = Button6Click
  end
end
