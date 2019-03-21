#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USearchOrigin_ScriptedMoveTarget()
{
    class_< USearchOrigin_ScriptedMoveTarget, bases< USearchOrigin >  , boost::noncopyable>("USearchOrigin_ScriptedMoveTarget", no_init)
        .def("StaticClass", &USearchOrigin_ScriptedMoveTarget::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}