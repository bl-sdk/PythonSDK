#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ANxGenericForceFieldBrush()
{
    py::class_< ANxGenericForceFieldBrush,  AVolume   >("ANxGenericForceFieldBrush")
        .def_readwrite("ExcludeChannel", &ANxGenericForceFieldBrush::ExcludeChannel)
        .def_readwrite("CollideWithChannels", &ANxGenericForceFieldBrush::CollideWithChannels)
        .def_readwrite("RBChannel", &ANxGenericForceFieldBrush::RBChannel)
        .def_readwrite("Coordinates", &ANxGenericForceFieldBrush::Coordinates)
        .def_readwrite("Constant", &ANxGenericForceFieldBrush::Constant)
        .def_readwrite("PositionMultiplierX", &ANxGenericForceFieldBrush::PositionMultiplierX)
        .def_readwrite("PositionMultiplierY", &ANxGenericForceFieldBrush::PositionMultiplierY)
        .def_readwrite("PositionMultiplierZ", &ANxGenericForceFieldBrush::PositionMultiplierZ)
        .def_readwrite("PositionTarget", &ANxGenericForceFieldBrush::PositionTarget)
        .def_readwrite("VelocityMultiplierX", &ANxGenericForceFieldBrush::VelocityMultiplierX)
        .def_readwrite("VelocityMultiplierY", &ANxGenericForceFieldBrush::VelocityMultiplierY)
        .def_readwrite("VelocityMultiplierZ", &ANxGenericForceFieldBrush::VelocityMultiplierZ)
        .def_readwrite("VelocityTarget", &ANxGenericForceFieldBrush::VelocityTarget)
        .def_readwrite("Noise", &ANxGenericForceFieldBrush::Noise)
        .def_readwrite("FalloffLinear", &ANxGenericForceFieldBrush::FalloffLinear)
        .def_readwrite("FalloffQuadratic", &ANxGenericForceFieldBrush::FalloffQuadratic)
        .def_readwrite("TorusRadius", &ANxGenericForceFieldBrush::TorusRadius)
        .def_readwrite("ForceField", &ANxGenericForceFieldBrush::ForceField)
        .def_readwrite("ConvexMeshes", &ANxGenericForceFieldBrush::ConvexMeshes)
        .def_readwrite("ExclusionShapes", &ANxGenericForceFieldBrush::ExclusionShapes)
        .def_readwrite("ExclusionShapePoses", &ANxGenericForceFieldBrush::ExclusionShapePoses)
        .def_readwrite("LinearKernel", &ANxGenericForceFieldBrush::LinearKernel)
        .def("StaticClass", &ANxGenericForceFieldBrush::StaticClass, py::return_value_policy::reference)
        .def("StopsProjectile", &ANxGenericForceFieldBrush::StopsProjectile)
        .def("eventPostBeginPlay", &ANxGenericForceFieldBrush::eventPostBeginPlay)
        .staticmethod("StaticClass")
  ;
}