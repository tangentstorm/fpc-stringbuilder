// Interface declaration for Delphi/.NET-compatible TStringBuilder class:
// http://docwiki.embarcadero.com/Libraries/XE4/en/System.SysUtils.TStringBuilder
// http://msdn.microsoft.com/en-us/library/system.text.stringbuilder

type TStringBuilder = class
  public
    constructor Create; overload;
    constructor Create(aCapacity: Integer); overload;
    constructor Create(const Value: string); overload;
    constructor Create(aCapacity: Integer; aMaxCapacity: Integer); overload;
    constructor Create(const Value: string; aCapacity: Integer); overload;
    constructor Create(const Value: string; StartIndex: Integer; Length: Integer; aCapacity: Integer); overload;

    destructor Destroy; override;

    function Append(const Value: AnsiString): TStringBuilder; overload;
    function Append(const Value: ShortString): TStringBuilder; overload;

    function Append(const Value: Boolean): TStringBuilder; overload;
    function Append(const Value: Byte): TStringBuilder; overload;
    function Append(const Value: Char): TStringBuilder; overload;
    function Append(const Value: Currency): TStringBuilder; overload;
    function Append(const Value: Double): TStringBuilder; overload;
    function Append(const Value: Smallint): TStringBuilder; overload;
    function Append(const Value: Integer): TStringBuilder; overload;
    function Append(const Value: Int64): TStringBuilder; overload;
    function Append(const Value: TObject): TStringBuilder; overload;
    function Append(const Value: Shortint): TStringBuilder; overload;
    function Append(const Value: Single): TStringBuilder; overload;
    // function Append(const Value: string): TStringBuilder; overload;
    function Append(const Value: UInt64): TStringBuilder; overload;
    function Append(const Value: TCharArray): TStringBuilder; overload;
    function Append(const Value: Word): TStringBuilder; overload;
    function Append(const Value: Cardinal): TStringBuilder; overload;
    function Append(const Value: PAnsiChar): TStringBuilder; overload;
    // function Append(const Value: RawByteString): TStringBuilder; overload;
    function Append(const Value: Char; RepeatCount: Integer): TStringBuilder; overload;
    function Append(const Value: TCharArray; StartIndex: Integer; CharCount: Integer): TStringBuilder; overload;
    function Append(const Value: string; StartIndex: Integer; Count: Integer): TStringBuilder; overload;

    function AppendFormat(const Format: string; const Args: array of const): TStringBuilder; overload;

    function AppendLine: TStringBuilder; overload;
    function AppendLine(const Value: string): TStringBuilder; overload;

    procedure Clear;

    procedure CopyTo(SourceIndex: Integer; const Destination: TCharArray; DestinationIndex: Integer; Count: Integer);

    function EnsureCapacity(aCapacity: Integer): Integer;

    function Equals(StringBuilder: TStringBuilder): Boolean; reintroduce;

    function Insert(Index: Integer; const Value: Boolean): TStringBuilder; overload;
    function Insert(Index: Integer; const Value: Byte): TStringBuilder; overload;
    function Insert(Index: Integer; const Value: Char): TStringBuilder; overload;
    function Insert(Index: Integer; const Value: Currency): TStringBuilder; overload;
    function Insert(Index: Integer; const Value: Double): TStringBuilder; overload;
    function Insert(Index: Integer; const Value: Smallint): TStringBuilder; overload;
    function Insert(Index: Integer; const Value: Integer): TStringBuilder; overload;
    function Insert(Index: Integer; const Value: TCharArray): TStringBuilder; overload;
    function Insert(Index: Integer; const Value: Int64): TStringBuilder; overload;
    function Insert(Index: Integer; const Value: TObject): TStringBuilder; overload;
    function Insert(Index: Integer; const Value: Shortint): TStringBuilder; overload;
    function Insert(Index: Integer; const Value: Single): TStringBuilder; overload;
    function Insert(Index: Integer; const Value: string): TStringBuilder; overload;
    function Insert(Index: Integer; const Value: Word): TStringBuilder; overload;
    function Insert(Index: Integer; const Value: Cardinal): TStringBuilder; overload;
    function Insert(Index: Integer; const Value: UInt64): TStringBuilder; overload;
    function Insert(Index: Integer; const Value: string; count: Integer): TStringBuilder; overload;
    function Insert(Index: Integer; const Value: TCharArray; startIndex: Integer; charCount: Integer): TStringBuilder; overload;

    function Remove(StartIndex: Integer; RemLength: Integer): TStringBuilder;

    function Replace(const OldChar: Char; const NewChar: Char): TStringBuilder; overload;
    function Replace(const OldValue: string; const NewValue: string): TStringBuilder; overload;
    function Replace(const OldChar: Char; const NewChar: Char; StartIndex: Integer; Count: Integer): TStringBuilder; overload;
    function Replace(const OldValue: string; const NewValue: string; StartIndex: Integer; Count: Integer): TStringBuilder; overload;

    function ToString: string; overload; override;
    function ToString(StartIndex: Integer; StrLength: Integer): string; reintroduce; overload;
end;
