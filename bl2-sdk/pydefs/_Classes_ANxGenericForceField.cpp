#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ANxGenericForceField()
{
    class_< ANxGenericForceField, bases< ANxForceField >  , boost::noncopyable>("ANxGenericForceField", no_init)
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
        .def("StaticClass", &ANxGenericForceField::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}