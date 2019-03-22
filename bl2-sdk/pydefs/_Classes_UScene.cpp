#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UScene(py::module &m)
{
    py::class_< UScene,  UObject   >(m, "UScene")
        .def("StaticClass", &UScene::StaticClass, py::return_value_policy::reference)
          ;
}