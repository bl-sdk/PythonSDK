#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxProfileSettings(py::module &m)
{
    py::class_< UGearboxProfileSettings,  UOnlineProfileSettings   >(m, "UGearboxProfileSettings")
          ;
}