#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ANxForceFieldGeneric(py::object m)
{
    py::class_< ANxForceFieldGeneric,  AActor   >(m, "ANxForceFieldGeneric")
        .def_readwrite("Shape", &ANxForceFieldGeneric::Shape)
        .def_readwrite("DrawComponent", &ANxForceFieldGeneric::DrawComponent)
        .def_readwrite("RoughExtentX", &ANxForceFieldGeneric::RoughExtentX)
        .def_readwrite("RoughExtentY", &ANxForceFieldGeneric::RoughExtentY)
        .def_readwrite("RoughExtentZ", &ANxForceFieldGeneric::RoughExtentZ)
        .def_readwrite("Coordinates", &ANxForceFieldGeneric::Coordinates)
        .def_readwrite("Constant", &ANxForceFieldGeneric::Constant)
        .def_readwrite("PositionMultiplierX", &ANxForceFieldGeneric::PositionMultiplierX)
        .def_readwrite("PositionMultiplierY", &ANxForceFieldGeneric::PositionMultiplierY)
        .def_readwrite("PositionMultiplierZ", &ANxForceFieldGeneric::PositionMultiplierZ)
        .def_readwrite("PositionTarget", &ANxForceFieldGeneric::PositionTarget)
        .def_readwrite("VelocityMultiplierX", &ANxForceFieldGeneric::VelocityMultiplierX)
        .def_readwrite("VelocityMultiplierY", &ANxForceFieldGeneric::VelocityMultiplierY)
        .def_readwrite("VelocityMultiplierZ", &ANxForceFieldGeneric::VelocityMultiplierZ)
        .def_readwrite("VelocityTarget", &ANxForceFieldGeneric::VelocityTarget)
        .def_readwrite("Noise", &ANxForceFieldGeneric::Noise)
        .def_readwrite("FalloffLinear", &ANxForceFieldGeneric::FalloffLinear)
        .def_readwrite("FalloffQuadratic", &ANxForceFieldGeneric::FalloffQuadratic)
        .def_readwrite("TorusRadius", &ANxForceFieldGeneric::TorusRadius)
        .def_readwrite("LinearKernel", &ANxForceFieldGeneric::LinearKernel)
        .def_readwrite("ExcludeChannel", &ANxForceField::ExcludeChannel)
        .def_readwrite("CollideWithChannels", &ANxForceField::CollideWithChannels)
        .def_readwrite("RBChannel", &ANxForceField::RBChannel)
        .def_readwrite("ForceField", &ANxForceField::ForceField)
        .def_readwrite("ConvexMeshes", &ANxForceField::ConvexMeshes)
        .def_readwrite("ExclusionShapes", &ANxForceField::ExclusionShapes)
        .def_readwrite("ExclusionShapePoses", &ANxForceField::ExclusionShapePoses)
        .def_readwrite("U2NRotation", &ANxForceField::U2NRotation)
        .def_readwrite("SceneIndex", &ANxForceField::SceneIndex)
        .def("StaticClass", &ANxForceFieldGeneric::StaticClass, py::return_value_policy::reference)
        .def("DoInitRBPhys", &ANxForceFieldGeneric::DoInitRBPhys)
        .def("OnToggle", &ANxForceField::OnToggle)
          ;
}