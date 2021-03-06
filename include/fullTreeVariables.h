// Conversion factors
const static double tdcChannelToTime = 180./4096.; // TDC Channel to [ns]
const static double scalerCountsToTime = 1.0e-6;   // Scaler Counts to [s]

float Pdc30; // East MWPC Anode PADC
float Pdc34; // West MWPC Anode PADC

float Tdc016; // East Two-Fold Timing TDC
float Tdc017; // West Two-Fold Timing TDC

float Sis00; // Sis00 Input Register

float Qadc[8]; // East and West PMT QADC

float Pdc2[32]; // East MWPC Cathode PADC
float Padc[32]; // West MWPC Cathode PADC

float S83028; // Clock in [us] Since Run Start

float Pdc38;  // Gate Valve UCN Monitor PADC
float Pdc39;  // Switcher UCN Monitor PADC
float Pdc310; // AFP Fe Foil UCN Monitor PADC
float Pdc311; // SCS UCN Monitor PADC

float Qadc9;  // East Top Veto QADC
float Tdc019; // East Top Veto TDC
float Pdc313; // East Drift Tube Veto TAC
float Pdc315; // West Drift Tube Veto TAC
float Qadc8;  // East Backing Veto QADC
float Tdc018; // East Backing Veto TDC
float Qadc10; // West Backing Veto QADC
float Tdc020; // West Backing Veto TDC
