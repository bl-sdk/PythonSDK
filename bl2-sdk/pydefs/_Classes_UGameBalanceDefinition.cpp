#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGameBalanceDefinition()
{
    class_< UGameBalanceDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UGameBalanceDefinition", no_init)
        .def_readwrite("BalanceByRegion", &UGameBalanceDefinition::BalanceByRegion)
        .def("StaticClass", &UGameBalanceDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}