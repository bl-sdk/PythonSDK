#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryTrigger(py::module &m)
{
    py::class_< UActorFactoryTrigger,  UActorFactory   >(m, "UActorFactoryTrigger")
		.def_static("StaticClass", &UActorFactoryTrigger::StaticClass, py::return_value_policy::reference)
          ;
}