// Configuration for General Purpose Slicer(GPSlicer)

// == Basic Quality Configuration ==

// Set Nozzle Diameter (in mm)
#define Nozzle_Diameter 0.8

// Set Layer Height (in mm)
#define Layer_Height 0.2

// Set Initial Layer Height (in mm)
// - Disable it if not required. Will be automatically set as Layer_Height.
//#define Initial_Layer_Height 0.2

#if DISABLED(Initial_Layer_Height)
	#define Initial_Layer_Height Layer_Height
#endif

// Set Layer Width (in mm)
#define Line_Width 0.3

// == Wall Configuration ==

// Set Wall line Count
// - Disalbe it if you want to set custom thickness.
#define Wall_Line_Count 3

#if ENABLED(Wall_Line_Count)
	#define Wall_Thickness_mm Line_Width*Wall_Line_Count
#else
	#define Wall_Thickness_mm
#endif


// Set Infill Density (in percentage)
// - Must be more than 0.
#define Infill_Density 15


#if 