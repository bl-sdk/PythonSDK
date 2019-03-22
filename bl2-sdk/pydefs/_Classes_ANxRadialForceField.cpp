#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ANxRadialForceField(py::module &m)
{
    py::class_< ANxRadialForceField,  ANxForceField   >(m, "ANxRadialForceField")
        .def_readwrite("RenderComponent", &ANxRadialForceField::RenderComponent)
        .def_readwrite("ForceStrength", &ANxRadialForceField::ForceStrength)
        .def_readwrite("ForceRadius", &ANxRadialForceField::ForceRadius)
        .def_readwrite("ForceFalloff", &ANxRadialForceField::ForceFalloff)
        .def_readwrite("LinearKernel", &ANxRadialForceField::LinearKernel)
        .def("StaticClass", &ANxRadialForceField::StaticClass, py::return_value_policy::reference)
          ;
}