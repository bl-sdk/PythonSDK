#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAIState_Sequential(py::module &m)
{
    py::class_< UAIState_Sequential,  UAIStateBase   >(m, "UAIState_Sequential")
        .def("StaticClass", &UAIState_Sequential::StaticClass, py::return_value_policy::reference)
          ;
}