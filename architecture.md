# Contexte architecture

- Racine du snapshot : `/home/noxe/projet/push_swap`
- Fichiers scannés   : 99

## Langages dominants
- c · 84 fichiers (ex: algo_turk/init_noeud_a.c, algo_turk/init_noeud_b.c, algo_turk/limit.c)
- markdown · 6 fichiers (ex: .pytest_cache/README.md, CHANGELOG.md, MISSION.md)

## Signaux frameworks/outillage
- Aucun signal détecté

## Type de projet (heuristique)
- Type : api (low)
- Signaux : app/server/main entrypoint

## Stack detectee
- Stack : c
- Signaux : language:c

## Architecture logique
- Pipeline : scan → map → analyze
  - scan : construit un snapshot (arbre de fichiers + README).
  - map  : agent analyste (langages, frameworks, docs, entrypoints, watchers) et génère `architecture.md`.
  - analyze : agent chef de projet (priorités, décisions) sur snapshot + changelog.

## Composants clés
- (composants non identifiés)

## Données échangées
- Snapshot : {root, tree[], readmes[]} issu de `scan`.
- architecture.md : mémo généré par l’agent analyste (ce fichier).
- Changelog (optionnel) : JSON passé à `analyze`.

## Points d’entrée probables
- main.c

## Documentation repérée
- README : README.md · Description
- README : .pytest_cache/README.md · pytest cache directory #
- Doc : docs/push_swap.en.subject.pdf
- Doc : docs/review_report.md

## Watchers / boucles rapides
- generic: `watch -n 2 "echo monitoring..."`

## IA / Providers
- Modes : `model` (API) ou `client_ia` (clients locaux).
- Sélection : auto-préférence Codex si présent, sinon `--ia-provider` ou `/provider` dans le shell.

## Agents Carabiner
- Analyste : cartographie langages/frameworks/docs/entrypoints, génère `architecture.md`.
- Tests : propose commandes de tests et pistes de couverture (sortie `tests` dans le bundle).
- Chef de projet : priorités/décisions à partir du snapshot et du changelog.

## Commandes CLI utiles
- `carabiner` (shell interactif `/`), `carabiner map <path> --ia-mode ...`, `carabiner full ...`.
- Flags : `--ia-mode`, `--ia-provider`, `-i` (prompts), `-H` (résumé humain).


> Généré automatiquement par l’agent analyste (snapshot-only).