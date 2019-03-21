#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ANxRadialForceField()
{
    class_< ANxRadialForceField, bases< ANxForceField >  , boost::noncopyable>("ANxRadialForceField", no_init)
        .def_readwrite("RenderComponent", &ANxRadialForceField::RenderComponent)
        .def_readwrite("ForceStrength", &ANxRadialForceField::ForceStrength)
        .def_readwrite("ForceRadius", &ANxRadialForceField::ForceRadius)
        .def_readwrite("ForceFalloff", &ANxRadialForceField::ForceFalloff)
        .def_readwrite("LinearKernel", &ANxRadialForceField::LinearKernel)
        .def("StaticClass", &ANxRadialForceField::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}