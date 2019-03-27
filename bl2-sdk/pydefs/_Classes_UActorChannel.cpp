#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorChannel(py::module &m)
{
    py::class_< UActorChannel,  UChannel   >(m, "UActorChannel")
		.def_static("StaticClass", &UActorChannel::StaticClass, py::return_value_policy::reference)
          ;
}