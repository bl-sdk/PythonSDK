#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationType_Skin(py::module &m)
{
    py::class_< UCustomizationType_Skin,  UCustomizationType   >(m, "UCustomizationType_Skin")
		.def_static("StaticClass", &UCustomizationType_Skin::StaticClass, py::return_value_policy::reference)
          ;
}