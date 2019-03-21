#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAIState_Sequential()
{
    class_< UAIState_Sequential, bases< UAIStateBase >  , boost::noncopyable>("UAIState_Sequential", no_init)
        .def("StaticClass", &UAIState_Sequential::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}