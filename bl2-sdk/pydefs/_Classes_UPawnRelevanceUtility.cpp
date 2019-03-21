#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPawnRelevanceUtility()
{
    class_< UPawnRelevanceUtility, bases< UObject >  , boost::noncopyable>("UPawnRelevanceUtility", no_init)
        .def("StaticClass", &UPawnRelevanceUtility::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}