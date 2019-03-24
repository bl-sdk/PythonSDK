#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBookMark2D(py::module &m)
{
    py::class_< UBookMark2D,  UObject   >(m, "UBookMark2D")
		.def_static("StaticClass", &UBookMark2D::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Zoom2D", &UBookMark2D::Zoom2D)
        .def_readwrite("Location", &UBookMark2D::Location)
          ;
}