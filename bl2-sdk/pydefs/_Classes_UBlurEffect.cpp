#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBlurEffect(py::object m)
{
    py::class_< UBlurEffect,  UPostProcessEffect   >(m, "UBlurEffect")
        .def_readwrite("BlurKernelSize", &UBlurEffect::BlurKernelSize)
        .def("StaticClass", &UBlurEffect::StaticClass, py::return_value_policy::reference)
          ;
}