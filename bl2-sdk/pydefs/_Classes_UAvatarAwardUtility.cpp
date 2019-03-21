#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAvatarAwardUtility()
{
    class_< UAvatarAwardUtility, bases< UObject >  , boost::noncopyable>("UAvatarAwardUtility", no_init)
        .def("StaticClass", &UAvatarAwardUtility::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}