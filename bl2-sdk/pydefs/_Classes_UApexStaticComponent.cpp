#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UApexStaticComponent(py::module &m)
{
    py::class_< UApexStaticComponent,  UApexComponentBase   >(m, "UApexStaticComponent")
        .def("StaticClass", &UApexStaticComponent::StaticClass, py::return_value_policy::reference)
          ;
}