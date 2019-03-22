#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBlurEffect(py::module &m)
{
    py::class_< UBlurEffect,  UPostProcessEffect   >(m, "UBlurEffect")
        .def_readwrite("BlurKernelSize", &UBlurEffect::BlurKernelSize)
          ;
}