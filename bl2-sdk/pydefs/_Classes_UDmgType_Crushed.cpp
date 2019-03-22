#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDmgType_Crushed(py::module &m)
{
    py::class_< UDmgType_Crushed,  UDamageType   >(m, "UDmgType_Crushed")
          ;
}