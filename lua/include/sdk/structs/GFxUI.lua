// 0xC 
struct FSoundThemeBinding {
	struct FName ThemeName; // 0x0 (0x8)
	struct UUISoundTheme* Theme; // 0x8 (0x4)
};

// 0x18 
struct FASValue {
	unsigned char Type; // 0x0 (0x1) (Enum = ASType)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	BOOL B : 1; // 0x4 (0x4)
	const unsigned long: 0;
	float N; // 0x8 (0x4)
	struct FString S; // 0xC (0xC)
};

// 0xC 
struct FGFxWidgetBinding {
	struct FName WidgetName; // 0x0 (0x8)
	struct UClass* WidgetClass; // 0x8 (0x4)
};

// 0x98 
struct FGFxDataStoreBinding {
	struct FUIDataStoreBinding DataSource; // 0x0 (0x30)
	struct FString VarPath; // 0x30 (0xC)
	struct FString ModelId; // 0x3C (0xC)
	struct FString ControlId; // 0x48 (0xC)
	BOOL bEditable : 1; // 0x54 (0x4)
	const unsigned long: 0;
	struct TArray_FName CellTags; // 0x58 (0xC)
	const struct TArray_unsigned_char ModelIdUtf8; // 0x64 (0xC)
	const struct TArray_unsigned_char ControlIdUtf8; // 0x70 (0xC)
	const struct FScriptInterface ListDataProvider; // 0x7C (0x8)
	const struct TArray_FName FullCellTags; // 0x84 (0xC)
	const struct FPointer ModelRef; // 0x90 (0x4)
	const struct FPointer ControlRef; // 0x94 (0x4)
};

// 0x10 
struct FExternalTexture {
	struct FString Resource; // 0x0 (0xC)
	struct UTexture* Texture; // 0xC (0x4)
};

// 0x2C 
struct FASDisplayInfo {
	float X; // 0x0 (0x4)
	float Y; // 0x4 (0x4)
	float Z; // 0x8 (0x4)
	float Rotation; // 0xC (0x4)
	float XRotation; // 0x10 (0x4)
	float YRotation; // 0x14 (0x4)
	float XScale; // 0x18 (0x4)
	float YScale; // 0x1C (0x4)
	float ZScale; // 0x20 (0x4)
	float Alpha; // 0x24 (0x4)
	BOOL Visible : 1; // 0x28 (0x4)
	BOOL hasX : 1; // 0x28 (0x4)
	BOOL hasY : 1; // 0x28 (0x4)
	BOOL hasZ : 1; // 0x28 (0x4)
	BOOL hasRotation : 1; // 0x28 (0x4)
	BOOL hasXRotation : 1; // 0x28 (0x4)
	BOOL hasYRotation : 1; // 0x28 (0x4)
	BOOL hasXScale : 1; // 0x28 (0x4)
	BOOL hasYScale : 1; // 0x28 (0x4)
	BOOL hasZScale : 1; // 0x28 (0x4)
	BOOL hasAlpha : 1; // 0x28 (0x4)
	BOOL hasVisible : 1; // 0x28 (0x4)
	const unsigned long: 0;
};

// 0x20 
struct FASColorTransform {
	struct FLinearColor Multiply; // 0x0 (0x10)
	struct FLinearColor Add; // 0x10 (0x10)
};

// 0x24 
struct FEventData {
	struct FString Type; // 0x0 (0xC)
	int Data; // 0xC (0x4)
	int mouseIndex; // 0x10 (0x4)
	int Button; // 0x14 (0x4)
	int Index; // 0x18 (0x4)
	int lastIndex; // 0x1C (0x4)
	int controllerIdx; // 0x20 (0x4)
};

// 0xC 
struct FGCReference {
	const struct UObject* m_object; // 0x0 (0x4)
	int m_count; // 0x4 (0x4)
	int m_statid; // 0x8 (0x4)
};

// 0xC 
struct FAkEventResolver {
	struct FName Interaction; // 0x0 (0x8)
	struct UAkEvent* AkEvent; // 0x8 (0x4)
};

