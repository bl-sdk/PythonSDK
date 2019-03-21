#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerBehaviorBase()
{
    class_< UPlayerBehaviorBase, bases< UBehaviorBase >  , boost::noncopyable>("UPlayerBehaviorBase", no_init)
        .def("StaticClass", &UPlayerBehaviorBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}