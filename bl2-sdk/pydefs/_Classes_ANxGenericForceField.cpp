#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ANxGenericForceField(py::module &m)
{
    py::class_< ANxGenericForceField,  ANxForceField   >(m, "ANxGenericForceField")
        .def_readwrite("Coordinates", &ANxGenericForceField::Coordinates)
        .def_readwrite("Constant", &ANxGenericForceField::Constant)
        .def_readwrite("PositionMultiplierX", &ANxGenericForceField::PositionMultiplierX)
        .def_readwrite("PositionMultiplierY", &ANxGenericForceField::PositionMultiplierY)
        .def_readwrite("PositionMultiplierZ", &ANxGenericForceField::PositionMultiplierZ)
        .def_readwrite("PositionTarget", &ANxGenericForceField::PositionTarget)
        .def_readwrite("VelocityMultiplierX", &ANxGenericForceField::VelocityMultiplierX)
        .def_readwrite("VelocityMultiplierY", &ANxGenericForceField::VelocityMultiplierY)
        .def_readwrite("VelocityMultiplierZ", &ANxGenericForceField::VelocityMultiplierZ)
        .def_readwrite("VelocityTarget", &ANxGenericForceField::VelocityTarget)
        .def_readwrite("Noise", &ANxGenericForceField::Noise)
        .def_readwrite("FalloffLinear", &ANxGenericForceField::FalloffLinear)
        .def_readwrite("FalloffQuadratic", &ANxGenericForceField::FalloffQuadratic)
        .def_readwrite("TorusRadius", &ANxGenericForceField::TorusRadius)
        .def_readwrite("LinearKernel", &ANxGenericForceField::LinearKernel)
        .def("StaticClass", &ANxGenericForceField::StaticClass, py::return_value_policy::reference)
          ;
}