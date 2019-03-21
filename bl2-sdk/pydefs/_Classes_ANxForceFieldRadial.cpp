#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ANxForceFieldRadial()
{
    class_< ANxForceFieldRadial, bases< ANxForceField >  , boost::noncopyable>("ANxForceFieldRadial", no_init)
        .def_readwrite("Shape", &ANxForceFieldRadial::Shape)
        .def_readwrite("DrawComponent", &ANxForceFieldRadial::DrawComponent)
        .def_readwrite("ForceStrength", &ANxForceFieldRadial::ForceStrength)
        .def_readwrite("ForceRadius", &ANxForceFieldRadial::ForceRadius)
        .def_readwrite("SelfRotationStrength", &ANxForceFieldRadial::SelfRotationStrength)
        .def_readwrite("ForceFalloff", &ANxForceFieldRadial::ForceFalloff)
        .def_readwrite("Kernel", &ANxForceFieldRadial::Kernel)
        .def("StaticClass", &ANxForceFieldRadial::StaticClass, return_value_policy< reference_existing_object >())
        .def("DoInitRBPhys", &ANxForceFieldRadial::DoInitRBPhys)
        .staticmethod("StaticClass")
  ;
}