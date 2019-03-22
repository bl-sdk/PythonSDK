#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNotify(py::module &m)
{
    py::class_< UAnimNotify,  UObject   >(m, "UAnimNotify")
        .def("FindNextNotifyOfClass", &UAnimNotify::FindNextNotifyOfClass)
          ;
}