#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FOnlineStatsColumn()
{
    class_< FOnlineStatsColumn >("FOnlineStatsColumn", no_init)
        .def_readwrite("ColumnNo", &FOnlineStatsColumn::ColumnNo)
        .def_readwrite("StatValue", &FOnlineStatsColumn::StatValue)
  ;
}