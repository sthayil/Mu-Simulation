#ifndef EVENTACTION_HH
#define EVENTACTION_HH
#pragma once

#include "Geant4/globals.hh"
#include "Geant4/G4UserEventAction.hh"

namespace MATHUSLA {

class EventAction : public G4UserEventAction {
 public:
  EventAction();
  virtual ~EventAction();

  virtual void BeginOfEventAction(const G4Event*);
  virtual void EndOfEventAction(const G4Event*);
};

} /* namespace MATHUSLA */

#endif /* EVENTACTION_HH */