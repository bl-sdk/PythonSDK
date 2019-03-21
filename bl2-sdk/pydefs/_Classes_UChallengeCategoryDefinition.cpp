#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UChallengeCategoryDefinition()
{
    class_< UChallengeCategoryDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UChallengeCategoryDefinition", no_init)
        .def_readwrite("CategoryName", &UChallengeCategoryDefinition::CategoryName)
        .def_readwrite("SortWeight", &UChallengeCategoryDefinition::SortWeight)
        .def("StaticClass", &UChallengeCategoryDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}