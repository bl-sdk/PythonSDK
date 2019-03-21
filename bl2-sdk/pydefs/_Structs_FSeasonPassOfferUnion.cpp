#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSeasonPassOfferUnion()
{
    py::class_< FSeasonPassOfferUnion >("FSeasonPassOfferUnion")
        .def_readwrite("AssociatedSeasonPassOfferId", &FSeasonPassOfferUnion::AssociatedSeasonPassOfferId)
        .def_readwrite("PaidOfferId", &FSeasonPassOfferUnion::PaidOfferId)
        .def_readwrite("FreeOfferId", &FSeasonPassOfferUnion::FreeOfferId)
        .def_readwrite("SeasonPassId", &FSeasonPassOfferUnion::SeasonPassId)
  ;
}