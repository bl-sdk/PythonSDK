#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMapSpecificBalanceModificationList()
{
    class_< FMapSpecificBalanceModificationList >("FMapSpecificBalanceModificationList", no_init)
        .def_readwrite("MapName", &FMapSpecificBalanceModificationList::MapName)
        .def_readwrite("AIPawnBalanceModifiers", &FMapSpecificBalanceModificationList::AIPawnBalanceModifiers)
  ;
}