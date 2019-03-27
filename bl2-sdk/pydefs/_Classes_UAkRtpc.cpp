#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAkRtpc(py::module &m)
{
    py::class_< UAkRtpc,  UAkObject   >(m, "UAkRtpc")
		.def_static("StaticClass", &UAkRtpc::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MinRange", &UAkRtpc::MinRange)
        .def_readwrite("MaxRange", &UAkRtpc::MaxRange)
          ;
}