<?php
/**
 * @file
 * pillar_strategies.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function pillar_strategies_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'drive through vaccination',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0a282452-9d1f-4aa2-a8e7-69d6ff8cc48e',
    'vocabulary_machine_name' => 'convenient_vaccination_services_other',
    'guid' => 'http://localhost:8888/immunizationed/convenient-vaccination-services-other/drive-through-vaccination',
  );
  $terms[] = array(
    'name' => 'waiting room self-vaccinations',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '15456140-74fc-4b9e-92d0-ac2c73513586',
    'vocabulary_machine_name' => 'convenient_vaccination_services_other',
    'guid' => 'http://localhost:8888/immunizationed/convenient-vaccination-services-other/waiting-room-self-vaccinations',
  );
  $terms[] = array(
    'name' => 'Extend influenza season',
    'description' => '<p>&nbsp;Extend your influenza vaccination season by vaccinating early:&nbsp;<span style="color: rgb(69, 38, 3); line-height: 15.59375px;">Use September visits to increase the opportunities to vaccinate)&nbsp;</span>and continue vaccination through March.</p>',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '1a352dcc-1bda-4074-a7eb-9d796c710e36',
    'vocabulary_machine_name' => 'convenient_vaccination_services_strategies',
    'guid' => 'http://localhost:8888/immunizationed/convenient-vaccination-services-strategies/extend-influenza-season',
  );
  $terms[] = array(
    'name' => 'Monitor progress',
    'description' => '<p>&nbsp;Graph your clinic\'s weekly progress on a chart.&nbsp;</p>',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '1c6b2e07-f7a3-47ad-8e4e-f43dd2c063fb',
    'vocabulary_machine_name' => 'motivation_strategies_',
    'guid' => 'http://localhost:8888/immunizationed/motivation-strategies/monitor-progress',
  );
  $terms[] = array(
    'name' => 'patients are able to call and get same day appointments for vaccines',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '31abf14a-e8d6-4bed-bd0a-4d3f63a1d00b',
    'vocabulary_machine_name' => 'convenient_vaccination_services_other',
    'guid' => 'http://localhost:8888/immunizationed/convenient-vaccination-services-other/patients-are-able-call-and-get-same-day-appointments-vaccines',
  );
  $terms[] = array(
    'name' => 'Record On-hold messages',
    'description' => '<p>Creating on-hold messages allow you to reach out to your patient while your phones are"on-hold". They will be able to hear the message while they wait for a response.&nbsp;</p>',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '3b2a4468-df57-40ff-a5f9-91f265c76b9c',
    'vocabulary_machine_name' => 'patient_notification_strategies',
    'guid' => 'http://localhost:8888/immunizationed/patient-notification-strategies/record-hold-messages',
  );
  $terms[] = array(
    'name' => 'Use all patient visits for vaccination opportunities',
    'description' => '<p>&nbsp;</p><p class="p1">You can offer PPSV/PCV, Tdap/Td when vaccinating for influenza.</p>',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => '445a453f-9f9a-4c4f-a5e6-10d6e6b7856d',
    'vocabulary_machine_name' => 'convenient_vaccination_services_strategies',
    'guid' => 'http://localhost:8888/immunizationed/convenient-vaccination-services-strategies/use-all-patient-visits-vaccination-opportunities',
  );
  $terms[] = array(
    'name' => 'we have a team of dedicated nurses for immunisations',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '646cb43c-4db6-40ce-b9ad-234703dc9a8d',
    'vocabulary_machine_name' => 'motivation',
    'guid' => 'http://localhost:8888/immunizationed/motivation-other/we-have-team-dedicated-nurses-immunisations',
  );
  $terms[] = array(
    'name' => 'Assess needs during previsit planning',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '6755df2e-ad4c-4bc8-910f-f9a9032edb98',
    'vocabulary_machine_name' => 'enhanced_vaccination_systems_other',
    'guid' => 'http://localhost:8888/immunizationed/enhanced-vaccination-systems-other/assess-needs-during-previsit-planning',
  );
  $terms[] = array(
    'name' => 'Ensure sufficient vaccine inventory',
    'description' => '<p style="margin-top: 0.5em; margin-bottom: 0.5em; padding-left: 10px; list-style-type: circle; list-style-image: url(http://www.immunizationed.pitt.edu/sites/all/themes/energetic/images/BlockContentBullets.png); line-height: 1.2em; background-repeat: no-repeat no-repeat;"><br>Set a goal that is a 20% to 25% increase over last year– either as percent immunized or number of doses to be given; then e<span style="line-height: 1.2em;">nsure your clinic\'s inventory is sufficient to handle the expected increase in usage.</span></p>',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6feb9de2-8414-4ed0-bcad-34dd2c49eb44',
    'vocabulary_machine_name' => 'motivation_strategies_',
    'guid' => 'http://localhost:8888/immunizationed/motivation-strategies/ensure-sufficient-vaccine-inventory',
  );
  $terms[] = array(
    'name' => 'Update Social Media',
    'description' => '<p>Update your clinic\'s website, Facebook, or Twitter accounts, to encourage patients, and friends and family of patients to get their vaccinations.&nbsp;</p>',
    'format' => 'filtered_html',
    'weight' => 7,
    'uuid' => '727787ef-2486-4afb-a49d-d9bc10c8ea72',
    'vocabulary_machine_name' => 'patient_notification_strategies',
    'guid' => 'http://localhost:8888/immunizationed/patient-notification-strategies/update-social-media',
  );
  $terms[] = array(
    'name' => 'Encourage staff to be vaccinated',
    'description' => '<p>You can use staff vaccination status as support for patient vaccination.</p>',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '7983a108-528f-4666-916c-cde08198e413',
    'vocabulary_machine_name' => 'patient_notification_strategies',
    'guid' => 'http://localhost:8888/immunizationed/patient-notification-strategies/encourage-staff-be-vaccinated',
  );
  $terms[] = array(
    'name' => 'Share progress weekly with team/staff',
    'description' => '<p>Share your clinic\'s progress with your team and staff.&nbsp;</p>',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => '7a0aa28d-3243-4e49-8c8f-d9f9b8982f3a',
    'vocabulary_machine_name' => 'motivation_strategies_',
    'guid' => 'http://localhost:8888/immunizationed/motivation-strategies/share-progress-weekly-teamstaff',
  );
  $terms[] = array(
    'name' => 'Will discuss at staff meeting a day when we can do express when Dr.Steiner is off.',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7dbba812-b481-49eb-83f8-32b15074b102',
    'vocabulary_machine_name' => 'convenient_vaccination_services_other',
    'guid' => 'http://localhost:8888/immunizationed/convenient-vaccination-services-other/will-discuss-staff-meeting-day-when-we-can-do-express-when',
  );
  $terms[] = array(
    'name' => 'Preclinic planning and community health fair',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7e9a6d88-906f-43fe-a403-0630321c33fc',
    'vocabulary_machine_name' => 'convenient_vaccination_services_other',
    'guid' => 'http://localhost:8888/immunizationed/convenient-vaccination-services-other/preclinic-planning-and-community-health-fair',
  );
  $terms[] = array(
    'name' => 'Allow for open access scheduling for vaccines during the day',
    'description' => '<p>Allow patients to schedule a vaccination appointment that is easiest and most convenient for them.&nbsp;</p>',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '86a14d4f-f16c-41c6-9372-98816dd5ff89',
    'vocabulary_machine_name' => 'convenient_vaccination_services_strategies',
    'guid' => 'http://localhost:8888/immunizationed/convenient-vaccination-services-strategies/allow-open-access-scheduling-vaccines-during-day',
  );
  $terms[] = array(
    'name' => 'Discuss needs on discharge',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '94cd289a-8877-4720-a3fe-ffbbc75ec91c',
    'vocabulary_machine_name' => 'patient_notification_other',
    'guid' => 'http://localhost:8888/immunizationed/patient-notification-other/discuss-needs-discharge',
  );
  $terms[] = array(
    'name' => 'Discuss serious nature of vaccine preventable diseases',
    'description' => '<p>Through your clinic\'s physician recommendation, you can use this as leverage to discuss the serious nature of vaccines as they prevent diseases.&nbsp;</p>',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9525b00c-4d70-4f87-8821-ae8abbaea8d2',
    'vocabulary_machine_name' => 'patient_notification_strategies',
    'guid' => 'http://localhost:8888/immunizationed/patient-notification-strategies/discuss-serious-nature-vaccine-preventable-diseases',
  );
  $terms[] = array(
    'name' => 'Use SOPs for vaccination',
    'description' => '<p><span style="color: rgb(69, 38, 3); line-height: 15.59375px;">Using SOPs will allow clinical staff (e.g. nurses and medical assistants) to assess eligibility for adult vaccines and vaccinate per protocol without the need for an individual physician’s order.</span></p>',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '971ac7e9-d8c5-4f38-a7e2-62ac264a01a9',
    'vocabulary_machine_name' => 'enhanced_office_vaccination_systems_strategies',
    'guid' => 'http://localhost:8888/immunizationed/enhanced-office-vaccination-systems-strategies/use-sops-vaccination',
  );
  $terms[] = array(
    'name' => 'Walk in vaccination',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '98b603cb-6c52-465e-9029-0b14b4abd8fd',
    'vocabulary_machine_name' => 'convenient_vaccination_services_other',
    'guid' => 'http://localhost:8888/immunizationed/convenient-vaccination-services-other/walk-vaccination',
  );
  $terms[] = array(
    'name' => 'When the physician is in the office',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'aa54ee19-5996-46d9-8ce3-c3b6a1b78422',
    'vocabulary_machine_name' => 'convenient_vaccination_services_other',
    'guid' => 'http://localhost:8888/immunizationed/convenient-vaccination-services-other/when-physician-office',
  );
  $terms[] = array(
    'name' => 'Foster competitions',
    'description' => '<p>Create ways that your clinic team and staff can compete to increase overall vaccination rates. Be creative! Allow for poster-making, activity-creating, and anything else to get your staff motivated.&nbsp;</p>',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'abcd80e0-bae8-4066-a0f8-ae2faa0c567d',
    'vocabulary_machine_name' => 'motivation_strategies_',
    'guid' => 'http://localhost:8888/immunizationed/motivation-strategies/foster-competitions',
  );
  $terms[] = array(
    'name' => 'Assess immunizations as part of vital signs',
    'description' => '<p>You can do this by assessing adult vaccination status as part of the routine during an office visit. This can be done by nursing staff, that is a“standard operating procedure”.</p>',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'b4c10f6b-7b9c-4898-90fb-d23c11924546',
    'vocabulary_machine_name' => 'enhanced_office_vaccination_systems_strategies',
    'guid' => 'http://localhost:8888/immunizationed/enhanced-office-vaccination-systems-strategies/assess-immunizations-part-vital-signs',
  );
  $terms[] = array(
    'name' => 'Send Emails',
    'description' => '<p>Send emails to your patients as a reminder to get their vaccine.</p>',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => 'b76c7421-7d96-40fb-bf32-95036e9dc642',
    'vocabulary_machine_name' => 'patient_notification_strategies',
    'guid' => 'http://localhost:8888/immunizationed/patient-notification-strategies/send-emails',
  );
  $terms[] = array(
    'name' => 'Hang posters',
    'description' => '<p>Notifying patients of the importance of vaccinations can be as easy as creating and hanging posters around your office for patients to view while they wait for their appointment.&nbsp;</p>',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => 'b78ca4f0-a791-456f-8e49-4d7a6cb0c5fa',
    'vocabulary_machine_name' => 'patient_notification_strategies',
    'guid' => 'http://localhost:8888/immunizationed/patient-notification-strategies/hang-posters',
  );
  $terms[] = array(
    'name' => 'immunizations are discuss @ appointments',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'bac72904-ac1e-432a-85a1-c2c42f5f2ad2',
    'vocabulary_machine_name' => 'patient_notification_other',
    'guid' => 'http://localhost:8888/immunizationed/patient-notification-other/immunizations-are-discuss-appointments',
  );
  $terms[] = array(
    'name' => 'schedule flu clinic when Dr.Steiner is off',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c6389974-76fb-42c2-8112-a53daec32271',
    'vocabulary_machine_name' => 'convenient_vaccination_services_other',
    'guid' => 'http://localhost:8888/immunizationed/convenient-vaccination-services-other/schedule-flu-clinic-when-drsteiner',
  );
  $terms[] = array(
    'name' => 'Have a dedicated vaccination station',
    'description' => '<p>Create a vaccination station at your clinic to o<span style="line-height: 1.2em;">ffer only vaccines in an e</span><span style="line-height: 1.2em;">fficient flow systems (1-2 minutes/patient) for check-in, screening,&nbsp;&nbsp; vaccination, and record keeping.</span></p>',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'd1cfa774-447e-45b1-8b05-065d9566be44',
    'vocabulary_machine_name' => 'convenient_vaccination_services_strategies',
    'guid' => 'http://localhost:8888/immunizationed/convenient-vaccination-services-strategies/have-dedicated-vaccination-station',
  );
  $terms[] = array(
    'name' => 'Send out Mailings',
    'description' => '<p>Send postage mailings to your patients as a reminder to get their vaccine. They can also use this on their calendar or fridge as a reminder.</p>',
    'format' => 'filtered_html',
    'weight' => 5,
    'uuid' => 'd7eccda1-732e-4b17-bc8b-12bff0e7f415',
    'vocabulary_machine_name' => 'patient_notification_strategies',
    'guid' => 'http://localhost:8888/immunizationed/patient-notification-strategies/send-out-mailings',
  );
  $terms[] = array(
    'name' => 'we have standing orders for pt in clinic',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e51399e9-5b44-4ae3-885d-3139ce919b46',
    'vocabulary_machine_name' => 'patient_notification_other',
    'guid' => 'http://localhost:8888/immunizationed/patient-notification-other/we-have-standing-orders-pt-clinic',
  );
  $terms[] = array(
    'name' => 'Offer rewards',
    'description' => '<p>Offer rewards for a job-well-done! Give your clinic\'s team and staff goals to look forward to when they complete activities and competitions to increase vaccinations.</p>',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => 'e7b6a33f-fe47-48ec-8c0f-f25b2e38d86f',
    'vocabulary_machine_name' => 'motivation_strategies_',
    'guid' => 'http://localhost:8888/immunizationed/motivation-strategies/offer-rewards',
  );
  $terms[] = array(
    'name' => 'Turn on EMR Best Practice Alerts',
    'description' => '<p>You can keep current with patient\'s vaccination status by turning on Best Practice Alerts and clear them when patients have received their vaccine.&nbsp;</p>',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => 'ed32bb0a-0d7b-4cf9-977a-646fe81209c2',
    'vocabulary_machine_name' => 'enhanced_office_vaccination_systems_strategies',
    'guid' => 'http://localhost:8888/immunizationed/enhanced-office-vaccination-systems-strategies/turn-emr-best-practice-alerts',
  );
  $terms[] = array(
    'name' => 'Express flu clinics',
    'description' => '<p><span style="color: rgb(69, 38, 3); line-height: 15.59375px;">Express services (e.g., dedicated influenza vaccination clinics) allow practices to accommodate large numbers of patients and facilitate efficient office flow. These could include: weekend or evening vaccine clinics, open access vaccine scheduling during office hours, and dedicated vaccination stations.</span></p>',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => 'f3caede6-d107-4a47-a39a-0cd60d2598ae',
    'vocabulary_machine_name' => 'convenient_vaccination_services_strategies',
    'guid' => 'http://localhost:8888/immunizationed/convenient-vaccination-services-strategies/express-flu-clinics',
  );
  $terms[] = array(
    'name' => 'Set up an Autodialer message',
    'description' => '<p>By setting up an autodial message, you can automatically send it out to patients to receive on their phones.</p>',
    'format' => 'filtered_html',
    'weight' => 6,
    'uuid' => 'f4fc0766-7b41-4c7b-af37-47c4f4eaebd5',
    'vocabulary_machine_name' => 'patient_notification_strategies',
    'guid' => 'http://localhost:8888/immunizationed/patient-notification-strategies/set-autodialer-message',
  );
  return $terms;
}
