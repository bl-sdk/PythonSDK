#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APathBlockingVolume(py::module &m)
{
    py::class_< APathBlockingVolume,  AVolume   >(m, "APathBlockingVolume")
		.def_static("StaticClass", &APathBlockingVolume::StaticClass, py::return_value_policy::reference)
          ;
}