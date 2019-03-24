#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryCoverLink(py::module &m)
{
    py::class_< UActorFactoryCoverLink,  UActorFactory   >(m, "UActorFactoryCoverLink")
		.def_static("StaticClass", &UActorFactoryCoverLink::StaticClass, py::return_value_policy::reference)
          ;
}