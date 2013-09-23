// TStringBuilder implementation for Free  Pascal
// Copyright (c) 2013 Michal J Wallace < http://tangentstorm.com/ >
// LICENSE: your choice of either:
// - MIT/X11 license
// - FPC license (GNU LGPL with static linking allowance).

constructor TStringBuilder.Create;
  begin
  end;


constructor TStringBuilder.Create(aCapacity: Integer);
  begin
  end;


constructor TStringBuilder.Create(const Value: string);
  begin
  end;


constructor TStringBuilder.Create(aCapacity: Integer; aMaxCapacity: Integer);
  begin
  end;


constructor TStringBuilder.Create(const Value: string; aCapacity: Integer);
  begin
  end;


constructor TStringBuilder.Create(const Value: string; StartIndex: Integer; Length: Integer; aCapacity: Integer);
  begin
  end;


destructor TStringBuilder.Destroy;
  begin
  end;


function TStringBuilder.GetCapacity : Integer;
  begin
    result := fCapacity
  end;


function TStringBuilder.GetMaxCapacity : Integer;
  begin
    result := fMaxCapacity
  end;


function TStringBuilder.GetLength : Integer;
  begin
    result := fLength
  end;


procedure TStringBuilder.SetCapacity(const Value : Integer);
  begin
    fCapacity := Value
  end;


procedure TStringBuilder.SetMaxCapacity(const Value : Integer);
  begin
    fMaxCapacity := Value
  end;


procedure TStringBuilder.SetLength(const Value : Integer);
  begin
    fLength := Value
  end;


function TStringBuilder.GetChar(const index : Integer) : char;
  begin
  end;


procedure TStringBuilder.SetChar(const index : Integer; const Value : char);
  begin
  end;


function TStringBuilder.Append(const Value: ShortString): TStringBuilder;
  begin
    result := self.Insert(self.Length, Value)
  end;


function TStringBuilder.Append(const Value: AnsiString): TStringBuilder;
  begin
    result := self.Insert(self.Length, Value)
  end;


function TStringBuilder.Append(const Value: Boolean): TStringBuilder;
  begin
    result := self.Insert(self.Length, Value)
  end;


function TStringBuilder.Append(const Value: Byte): TStringBuilder;
  begin
    result := self.Insert(self.Length, Value)
  end;


function TStringBuilder.Append(const Value: Char): TStringBuilder;
  begin
    result := self.Insert(self.Length, Value)
  end;


function TStringBuilder.Append(const Value: Currency): TStringBuilder;
  begin
    result := self.Insert(self.Length, Value)
  end;


function TStringBuilder.Append(const Value: Double): TStringBuilder;
  begin
    result := self.Insert(self.Length, Value)
  end;


function TStringBuilder.Append(const Value: Smallint): TStringBuilder;
  begin
    result := self.Insert(self.Length, Value)
  end;


function TStringBuilder.Append(const Value: Integer): TStringBuilder;
  begin
    result := self.Insert(self.Length, Value)
  end;


function TStringBuilder.Append(const Value: Int64): TStringBuilder;
  begin
    result := self.Insert(self.Length, Value)
  end;


function TStringBuilder.Append(const Value: TObject): TStringBuilder;
  begin
    result := self.Insert(self.Length, Value)
  end;


function TStringBuilder.Append(const Value: Shortint): TStringBuilder;
  begin
    result := self.Insert(self.Length, Value)
  end;


function TStringBuilder.Append(const Value: Single): TStringBuilder;
  begin
    result := self.Insert(self.Length, Value)
  end;


function TStringBuilder.Append(const Value: UInt64): TStringBuilder;
  begin
    result := self.Insert(self.Length, Value)
  end;


function TStringBuilder.Append(const Value: TCharArray): TStringBuilder;
  begin
    result := self.Insert(self.Length, Value)
  end;


function TStringBuilder.Append(const Value: Word): TStringBuilder;
  begin
    result := self.Insert(self.Length, Value)
  end;


function TStringBuilder.Append(const Value: Cardinal): TStringBuilder;
  begin
    result := self.Insert(self.Length, Value)
  end;


function TStringBuilder.Append(const Value: PAnsiChar): TStringBuilder;
  begin
    result := self.Insert(self.Length, Value)
  end;


function TStringBuilder.Append(const Value: Char; RepeatCount: Integer): TStringBuilder;
  begin
    result := self.Insert(self.Length, Value)
  end;


function TStringBuilder.Append(const Value: TCharArray; StartIndex: Integer; CharCount: Integer): TStringBuilder;
  begin
    result := self.Insert(self.Length, Value)
  end;


function TStringBuilder.Append(const Value: string; StartIndex: Integer; Count: Integer): TStringBuilder;
  begin
    result := self.Insert(self.Length, Value)
  end;


function TStringBuilder.AppendFormat(const Format: string; const Args: array of const): TStringBuilder;
  begin
    result := self
  end;


function TStringBuilder.AppendLine: TStringBuilder;
  begin
    result := self
  end;


function TStringBuilder.AppendLine(const Value: string): TStringBuilder;
  begin
    result := self
  end;


procedure TStringBuilder.Clear;
  begin
  end;


procedure TStringBuilder.CopyTo(SourceIndex: Integer; const Destination: TCharArray; DestinationIndex: Integer; Count: Integer);
  begin
  end;


function TStringBuilder.EnsureCapacity(aCapacity: Integer): Integer;
  begin
    result := 0
  end;


function TStringBuilder.Equals(StringBuilder: TStringBuilder): Boolean;
  begin
    result := false
  end;


function TStringBuilder.Insert(Index: Integer; const Value: Boolean): TStringBuilder;
  begin
    result := self
  end;


function TStringBuilder.Insert(Index: Integer; const Value: Byte): TStringBuilder;
  begin
    result := self
  end;

function TStringBuilder.Insert(Index: Integer; const Value: Char): TStringBuilder;
  begin
    result := self
  end;


function TStringBuilder.Insert(Index: Integer; const Value: Currency): TStringBuilder;
  begin
    result := self
  end;


function TStringBuilder.Insert(Index: Integer; const Value: Double): TStringBuilder;
  begin
    result := self
  end;


function TStringBuilder.Insert(Index: Integer; const Value: Smallint): TStringBuilder;
  begin
    result := self
  end;


function TStringBuilder.Insert(Index: Integer; const Value: Integer): TStringBuilder;
  begin
    result := self
  end;


function TStringBuilder.Insert(Index: Integer; const Value: TCharArray): TStringBuilder;
  begin
    result := self
  end;


function TStringBuilder.Insert(Index: Integer; const Value: Int64): TStringBuilder;
  begin
    result := self
  end;


function TStringBuilder.Insert(Index: Integer; const Value: TObject): TStringBuilder;
  begin
    result := self
  end;


function TStringBuilder.Insert(Index: Integer; const Value: Shortint): TStringBuilder;
  begin
    result := self
  end;


function TStringBuilder.Insert(Index: Integer; const Value: Single): TStringBuilder;
  begin
    result := self
  end;


function TStringBuilder.Insert(Index: Integer; const Value: string): TStringBuilder;
  begin
    result := self
  end;


function TStringBuilder.Insert(Index: Integer; const Value: Word): TStringBuilder;
  begin
    result := self
  end;


function TStringBuilder.Insert(Index: Integer; const Value: Cardinal): TStringBuilder;
  begin
    result := self
  end;


function TStringBuilder.Insert(Index: Integer; const Value: UInt64): TStringBuilder;
  begin
    result := self
  end;


function TStringBuilder.Insert(Index: Integer; const Value: string; count: Integer): TStringBuilder;
  begin
    result := self
  end;


function TStringBuilder.Insert(Index: Integer; const Value: TCharArray; startIndex: Integer; charCount: Integer): TStringBuilder;
  begin
    result := self
  end;


function TStringBuilder.Remove(StartIndex: Integer; RemLength: Integer): TStringBuilder;
  begin
    result := self
  end;


function TStringBuilder.Replace(const OldChar: Char; const NewChar: Char): TStringBuilder;
  begin
    result := self
  end;


function TStringBuilder.Replace(const OldValue: string; const NewValue: string): TStringBuilder;
  begin
    result := self
  end;


function TStringBuilder.Replace(const OldChar: Char; const NewChar: Char; StartIndex: Integer; Count: Integer): TStringBuilder;
  begin
    result := self
  end;


function TStringBuilder.Replace(const OldValue: string; const NewValue: string; StartIndex: Integer; Count: Integer): TStringBuilder;
  begin
    result := self
  end;


function TStringBuilder.ToString: string;
  begin
    result := ''
  end;


function TStringBuilder.ToString(StartIndex: Integer; StrLength: Integer): string;
  begin
    result := ''
  end;
