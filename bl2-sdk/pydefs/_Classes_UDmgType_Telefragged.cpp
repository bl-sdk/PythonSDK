#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDmgType_Telefragged(py::module &m)
{
    py::class_< UDmgType_Telefragged,  UDamageType   >(m, "UDmgType_Telefragged")
          ;
}