#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryInteractiveSwitch(py::module &m)
{
    py::class_< UActorFactoryInteractiveSwitch,  UActorFactoryInteractiveObject   >(m, "UActorFactoryInteractiveSwitch")
		.def_static("StaticClass", &UActorFactoryInteractiveSwitch::StaticClass, py::return_value_policy::reference)
          ;
}